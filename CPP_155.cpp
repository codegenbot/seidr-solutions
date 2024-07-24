for (int i = 0; i < b.size(); ++i) {
        int count = 0;
        int curr = b[i];
        while (curr > 0) {
            if (curr % 10 == num) {
                count++;
            }
            curr /= 10;
        }
        result.push_back(count);
    }