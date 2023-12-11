#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

int main(void){
    assert (issame(numerical_letter_grade({0, 0.7}) , {"E", "D-"}));
    return 0;
}