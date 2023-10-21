#include <iostream> 
#include <string> 
using namespace std;

int main()
{
    //Variable Declaration
    int frame = 10; //10 frames is all one round
    int lastFrame = 11;
    int score1, score2, score3, score4, score5, score6, score7, score8, score9, score10 = 0;
    int score = 0;
    char sp1;
    char sp2;
    string s;

    //For Loop
    for (int i = 1; i < lastFrame; i++)
    {
        cout << "Enter the first frame: ";
        cin >> s;
        cout << "Enter the second frame: ";
        cin >> s;
    }
    return 0;
}
