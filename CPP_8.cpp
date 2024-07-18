int sum = 0, product = 1;
        for (int num : numbers) {
            sum += num;
            product *= num;
        }
        return {sum, numbers.empty() ? 1 : product};
    }