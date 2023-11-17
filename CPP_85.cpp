/*
Given a non-empty vector of integers lst. add the even elements that are at odd indices..


Examples:
    add({4, 2, 6, 7}) ==> 2 
*/
#include<stdio.h>
#include<assert.h>
int main(){
    assert (add({4, 4, 6, 8}) == 12);
    assert (add({1, 2, 4, 6}) == 10);
    assert (add({1, 2, 5, 7}) == 0);
    assert (add({2, 2, 4, 8}) == 10);
    assert (add({2, 4, 4, 8}) == 12);
    assert (add({1, 1, 5, 5}) == 0);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({3, 3, 5, 7}) == 0);
    assert (add({1, 2, 3, 4}) == 0);
    assert (add({2, 4, 6, 8}) == 12);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 2, 3, 4}) == 0);
    assert (add({2, 4, 6, 8}) == 12);
    assert (add({2, 2, 4, 4}) == 4);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({2, 4, 6, 8}) == 12);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 2, 3, 4}) == 0);
    assert (add({2, 4, 6, 8}) == 12);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 2, 3, 4}) == 0);
    assert (add({2, 4, 6, 8}) == 12);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 2, 3, 4}) == 0);
    assert (add({2, 4, 6, 8}) == 12);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 2, 3, 4}) == 0);
    assert (add({2, 4, 6, 8}) == 12);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 2, 3, 4}) == 0);
    assert (add({2, 4, 6, 8}) == 12);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 2, 3, 4}) == 0);
    assert (add({2, 4, 6, 8}) == 12);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 2, 3, 4}) == 0);
    assert (add({2, 4, 6, 8}) == 12);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 2, 3, 4}) == 0);
    assert (add({2, 4, 6, 8}) == 12);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 2, 3, 4}) == 0);
    assert (add({2, 4, 6, 8}) == 12);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 2, 3, 4}) == 0);
    assert (add({2, 4, 6, 8}) == 12);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 2, 3, 4}) == 0);
    assert (add({2, 4, 6, 8}) == 12);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 2, 3, 4}) == 0);
    assert (add({2, 4, 6, 8}) == 12);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 2, 3, 4}) == 0);
    assert (add({2, 4, 6, 8}) == 12);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 2, 3, 4}) == 0);
    assert (add({2, 4, 6, 8}) == 12);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 2, 3, 4}) == 0);
    assert (add({2, 4, 6, 8}) == 12);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 2, 3, 4}) == 0);
    assert (add({2, 4, 6, 8}) == 12);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 2, 3, 4}) == 0);
    assert (add({2, 4, 6, 8}) == 12);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 2, 3, 4}) == 0);
    assert (add({2, 4, 6, 8}) == 12);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 2, 3, 4}) == 0);
    assert (add({2, 4, 6, 8}) == 12);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 2, 3, 4}) == 0);
    assert (add({2, 4, 6, 8}) == 12);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 3, 5, 7}) == 0);
    assert (add({1, 2, 3, 4}) == 0);
    assert (add({2, 4, 6, 8}) == 12);
    assert (add({1, 3, 5, 7}) == 0);
    }
