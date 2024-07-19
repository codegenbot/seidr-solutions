for (int i = 2; i <= a / 2; ++i) {
            if (a % i == 0) {
                a /= i;
                if (a % i == 0) {
                    a /= i;
                    for (int j = i + 1; j <= a / 2; ++j) {
                        if (a % j == 0) {
                            return true;
                        }
                    }
                }
            }
        }
        return false;
    }