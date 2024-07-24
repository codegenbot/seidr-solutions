#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    std::set<int> s1(l1.begin(), l1.end());
    std::set<int> s2(l2.begin(), l2.end());

    std::set<int> intersection;
    std::set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(intersection, intersection.begin()));

    std::vector<int> result(intersection.begin(), intersection.end());
    std::sort(result.begin(), result.end());
    return result;
}

bool issame(const std::vector<int>& a,const std::vector<int>& b){
    if(a.size()!=b.size())return false;
    for(int i=0;i<a.size();i++){
        if(find(b.begin(),b.end(),a[i]) == b.end())return false;
    }
    return true;
}

int main() {
    int n1,n2;
    std::cout<<"Enter the size of first array: ";
    std::cin>>n1;
    std::vector<int> l1(n1);
    std::cout<<"Enter the elements of first array: ";
    for(int i=0;i<n1;i++)std::cin>>l1[i];
    
    int n2;
    std::cout<<"Enter the size of second array: ";
    std::cin>>n2;
    std::vector<int> l2(n2);
    std::cout<<"Enter the elements of second array: ";
    for(int i=0;i<n2;i++)std::cin>>l2[i];
    
    std::vector<int> result = common(l1,l2);
    if(issame(result,l1))std::cout<<"Array 1 is subset of Array 2.\n";
    else if(issame(result,l2))std::cout<<"Array 2 is subset of Array 1.\n";
    else std::cout<<"Neither array is a subset of the other.\n";
    
    return 0;
}