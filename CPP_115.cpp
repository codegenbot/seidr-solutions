int result = 0;
        for (const auto &row : grid) {
            int current_bucket = 0;
            for (const auto &well : row) {
                if (well > current_bucket) {
                    result += (well - current_bucket);
                    current_bucket = well;
                }
                current_bucket = min(current_bucket, well);
            }
        }
        return result * capacity;
    }