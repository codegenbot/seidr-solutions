class Solution {
public:
    string numberToWords(int num) {
        if (num == 0) return "0";
        
        vector<string> ones = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
        vector<string> teens = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
        vector<string> tens = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

        if (num >= 100) {
            return ones[num/100] + " Hundred" + numberToWords(num%100);
        } else if (num >= 20) {
            return tens[num/10] + (num%10 == 0 ? "" : " " + ones[num%10]);
        } else if (num >= 10) {
            return teens[num-10];
        } else {
            return ones[num];
        }
    }

    string fizzBuzz(int n) {
        for (int i = 1; i <= n; ++i) {
            if (i % 3 == 0 && i % 5 == 0) 
                cout << "FizzBuzz" << endl;
            else if (i % 3 == 0) 
                cout << "Fizz" << endl;
            else if (i % 5 == 0) 
                cout << "Buzz" << endl;
            else
                cout << numberToWords(i) << endl;
        }
    }
};