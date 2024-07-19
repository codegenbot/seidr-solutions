int smallest = arr[0];
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == smallest) {
            if (i == 0) {
                return true;
            } else {
                return false;
            }
        }
    }
    return true;
}