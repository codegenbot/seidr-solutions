if (arr.empty()) {
        return -32768;
    }
    
    int productOfSigns = 1;
    int sum = 0;

    for (int num : arr) {
        if (num > 0) {
            productOfSigns *= 1;
        } else if (num < 0) {
            productOfSigns *= -1;
        }

        sum += abs(num);
    }
    
    return productOfSigns * sum;
}