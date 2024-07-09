vector<string> by_length(vector<int> arr) {
    vector<string> result;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            string numStr = "";
            switch (i) {
                case 1:
                    numStr = "One";
                    break;
                case 2:
                    numStr = "Two";
                    break;
                case 3:
                    numStr = "Three";
                    break;
                case 4:
                    numStr = "Four";
                    break;
                case 5:
                    numStr = "Five";
                    break;
                case 6:
                    numStr = "Six";
                    break;
                case 7:
                    numStr = "Seven";
                    break;
                case 8:
                    numStr = "Eight";
                    break;
                case 9:
                    numStr = "Nine";
                    break;
            }
            result.push_back(numStr);
        }
    }
    return result;
}