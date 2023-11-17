/*
Given an integer. return a vector that has the number of even and odd digits respectively.

 Example:
    even_odd_count(-12) ==> {1, 1}
    even_odd_count(123) ==> {1, 2}
*/
#include<stdio.h>
#include<math.h>
#include<string>
#include<vector>
    vector<int> num1;
    while(num>0)
    {
        int p1 = num%10;
        if(p1%2==0)
            {
               num1.push_back(1);
               break;
            }

           num=num/10;
            num1.push_back(0);

    }
    int s=num1.size()-1;
    while(s>=0)
        {
            if(num1[s]==0)
            num1.erase(num1.begin()+s);
            else
                break;
            s--;
        }
    /*int *i=&num1.at(num1.size()-1);

    i=&i++;
    printf("%d",*i);*/
    if((*(num1.end()-1))%2==0)
    {
        num1.push_back(0);
        vector<int> num2(num1);
        return num2;
    }
    else
        {
           num1.push_back(1);
            vector<int> num2(num1);
            return num2;
        }
}

int main()
{
    vector<int> x1;
    x1=even_odd_count(1216736);
    printf("%d\n",x1.size());
    vector<int>:: iterator i;
    for(i=x1.begin(); i!=x1.end(); i++)
    {
        printf("%d",*i);
    }
    return 0;
}
using namespace std;
vector<int> even_odd_count(int num){
