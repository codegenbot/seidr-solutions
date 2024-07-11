int min_even = -1;
        int min_index = -1;

        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i] % 2 == 0) {
                if (min_even == -1 || arr[i] < min_even || (arr[i] == min_even && i < min_index)) {
                    min_even = arr[i];
                    min_index = i;
                }
            }
        }

        if (min_even == -1) {
            return {};
        } else {
            return {min_even, min_index};
        }
    }