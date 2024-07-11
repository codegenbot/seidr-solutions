vector<float> res;
        for (int i = 1; i < xs.size(); ++i) {
            res.push_back(xs[i] * i);
        }
        return res;
    }