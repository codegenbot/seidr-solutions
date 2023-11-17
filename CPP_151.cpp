/*
A majority element in a sequence is an element which appears strictly greater than half times. Given a sequence of elements the task is to pick a majority element if present. 

Exapmle 
Input: 1 1 2 3 2 1 4
Output: 1

-- Complet séquence 
https://www.codewars.com/kata/5d23d89906f92a00267bb83d/train/cpp
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<map>
#include<set>
using namespace std;

  map<int, int> freq;
  set<int> mset;
  
  for (auto i : array) {
    // Numbers appear more than half times
    freq[i]++;
    if (freq[i] > mid)  {
      return i;
    }
  }

vector<int> findMajorityElement(vector<int> arr){
	if(arr.size() == 0)
	   return arr;
	int Max = 0;
	vector<int> re;
  map<int, int> fre;
	set<int> used;
	for(int i=0; i<arr.size(); i++){
		int idcar = arr[i];
		 if(index.count(abs(idcar)) == 0){
			 index[abs(idcar)] = idcar;
    }
		 if(fre.count(abs(idcar)) == 0)
            fre[abs(idcar)] = 0;
		fre[abs(idcar)] ++;
		if(Max < fre[abs(idcar)])
			Max = fre[abs(idcar)];
	}
	int mid = Max - Max/2;
	for(int j=0; j<arr.size(); j++){
		int d = fre[ abs(arr[j])];
		if(used.count(abs(arr[j])) == 0){
			if((arr[j] < 0 && (d + mid) > Max)||(arr[j] >0 && d >mid)){
				used.insert( abs(arr[j]));
				re.push_back(index[abs(arr[j])]);
			}
		  
		}
	}
	return re;
} 
