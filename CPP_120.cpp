sort(arr.begin(), arr.end());
        vector<int> result(arr.end() - k, arr.end());
        return result;
    }