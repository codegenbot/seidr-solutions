partial_sort(arr.begin(), arr.begin() + k, arr.end(), greater<int>());
        return vector<int>(arr.begin(), arr.begin() + k);
    }