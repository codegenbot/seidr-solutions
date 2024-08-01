vector<string> by_length(vector<int> arr) {
    vector<string> result;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            string str = "";
            switch (num) {
                case 1: str = "One"; break;
                case 2: str = "Two"; break;
                case 3: str = str = "Three"; break;
                case 4: str = "Four"; break;
                case 5: str = "Five"; break;
                case 6: str = "Six"; break;
                case 7: str = "Seven"; break;
                case 8: str = "Eight"; break;
                case 9: str = "Nine"; break;
            }
            result.push_back(str);
        }
    }

    sort(result.begin(), result.end());
    reverse(result.begin(), result.end());

    return result;
}

assert(by_length({9, 4, 8}) == vector<string>({"Eight", "Four", "Nine"}));