vector<string> numberToWords(int num) {
    vector<string> words;
    
    if (num < 0 || num > 99999999)
        return {"Out of range"};

    int numCopies = 3;

    string[] ones = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string[] tens = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    string[] teens = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

    if (num < 20) {
        words.push_back(ones[num]);
    } else if (num < 100) {
        int tensPlace = num / 10;
        int onesPlace = num % 10;
        
        if (onesPlace > 0)
            words.push_back(tens[tensPlace] + " " + ones[onesPlace]);

        if (onesPlace == 0)
            words.push_back(tens[tensPlace]);
    } else {
        int hundredsPlace = num / 100;
        int tensPlace = (num % 100) / 10;
        int onesPlace = num % 10;

        words.push_back(ones[hundredsPlace] + " Hundred");

        if (tensPlace > 0 || onesPlace > 0)
            words.push_back("and ");

        if (tensPlace > 1)
            words.push_back(tens[tensPlace]);
        else if (tensPlace == 1)
            words.push_back(teens[onesPlace]);

        if (onesPlace > 0 && !words.get(words.size() - 1).equals("Ten"))
            words.push_back(ones[onesPlace]);
    }

    return words;
}