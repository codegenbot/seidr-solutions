for (int i = 0; i < b.size(); ++i) {
        int count = 0;
        int current = b[i];
        while (current % num == 0) {
            count++;
            current /= num;
        }
        result.push_back(count);
    }