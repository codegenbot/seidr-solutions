#include "stdio.h"
#include <iostream>
#include <string>
using namespace std;
int isPrime(int x)
{
    if (x <= 0)
        return false;
    if (x == 1)
        return false;
    if (x%2 == 0 && x != 1 && x != 2)
        return false;
    for (int i = 3; i < x; i+=2)
        if (x%i == 0)
            return false;
    return true;
    
}
bool prime_length(string phrase){
    for(int i = 0; i < phrase.length();i++)
    {
        if(!isPrime(phrase[i]))
        {
            return false;
        }
            
    }
    return true;
}

int main()
{
    string sample = "a";
    if(prime_length(sample))
        cout << "The length of the given phrase is prime.";
    else
        cout << "The length of the given phrase is not prime.";
}
