if (x % 2 == 0) {
        if (y % 2 == 0) {
            return y;
        } else {
            return y - 1;
        }
    } else {
        if (y % 2 == 0) {
            return y - 2;
        } else {
            return y - 3;
        }
    }
}