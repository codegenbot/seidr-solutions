#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include <string>
int main(){
    assert (boost::any_cast<string>(compare_one(string("1"), 1)) == "None");
}
