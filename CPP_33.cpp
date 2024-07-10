vector<int> sort_third(vector<int> l) {
    vector<int> multiplesOfThree;
    vector<int> others;

    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0)
            multiplesOfThree.push_back(l[i]);
        else
            others.push_back(l[i]);
    }

    sort(multiplesOfThree.begin(), multiplesOfThree.end());

    vector<int> result;
    int j = 0;
    for (int i = 0; i < l.size(); ) {
        if (i % 3 == 0 && !multiplesOfThree.empty()) {
            int val = multiplesOfThree[j];
            while (!multiplesOfThree.empty() && j < multiplesOfThree.size()) {
                result.reserve(i + 1);
                for(int k = 0; k < 3; k++) {
                    if(i % 3 == 0)
                        i++;
                    else
                        i++;
                }
                result.push_back(val);
                j++;
                if(j >= multiplesOfThree.size())
                    break;
            }
        } else {
            result.push_back(others[(i % 3) % others.size()]);
            i++;
        }
    }

    return result;
}