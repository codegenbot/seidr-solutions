#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> eat(int number, int need, int remaining) {
    vector<int> result({number + remaining, remaining - need});
    
    return result;
}

int mainFunction() 
{
    int number, need, remaining;
    cout << "Enter the number of carrots you have eaten: ";
    cin >> number;
    cout << "Enter the number of carrots you need to eat: ";
    cin >> need;
    cout << "Enter the number of remaining carrots: ";
    cin >> remaining;

    vector<int> result = eat(number, need, remaining);

    cout << "Total number of eaten carrots after your meals: " << result[0] << endl;
    cout << "Number of carrots left after your meals: " << result[1] << endl;

    return 0;
}