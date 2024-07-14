class Solution {
public:
    string numberToWords(int num) {
        if (num == 0)
            return "0";
        
        vector<string> teens("One", "Eleven", "Twelve", "Thirteen", "Fourteen", 
                              "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen");
        vector<string> tens("Zero", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety");
        
        if (num < 10)
            return teens[num - 1];
        else if (num < 20) 
            return numberToWords(num);
        else if (num < 100) {
            string result = tens[num / 10] + ((num % 10) ? " " + numberToWords(num % 10) : "");
            return result;
        } else if (num < 1000) {
            string result = numberToWords(num / 100) + " Hundred" + ((num % 100) ? " and " + numberToWords(num % 100) : "");
            return result;
        } else if (num < 1000000) {
            string result = numberToWords(num / 1000) + " Thousand" + ((num % 1000) ? " " + numberToWords(num % 1000) : "");
            return result;
        }
        
        return "";
    }
    
    string fizzBuzz(int n) {
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0)
                cout << "FizzBuzz" << endl;
            else if (i % 3 == 0)
                cout << "Fizz" << endl;
            else if (i % 5 == 0)
                cout << "Buzz" << endl;
            else
                cout << to_string(i) << endl;
        }
    }
};