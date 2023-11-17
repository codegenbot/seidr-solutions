/*
triples_sum_to_zero takes a vector of integers as an input.
it returns true if there are three distinct elements in the vector that
sum to zero, and false otherwise.

>>> triples_sum_to_zero({1, 3, 5, 0})
false
>>> triples_sum_to_zero({1, 3, -2, 1})
true
>>> triples_sum_to_zero({1, 2, 3, 7})
false
>>> triples_sum_to_zero({2, 4, -5, 3, 9, 7})
true
>>> triples_sum_to_zero({1})
false
*/
#include<stdio.h>
#include<vector>
using namespace std;
bool triples_sum_to_zero(vector<int> l){
	int n = l.size();
	bool b = false;
	for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){
			for (int k = j + 1; k < n; k++){
				if ((l[i] + l[j] + l[k]) == 0){
					b = true;
				}
			}
		}
	}
	return b;
}

int main(){
	vector<int> l;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		int x;
		scanf("%d", &x);
		l.push_back(x);
	}
	if (triples_sum_to_zero(l) == true){
		printf("true");
	}
	else{
		printf("false");
	}
	return 0;
}
