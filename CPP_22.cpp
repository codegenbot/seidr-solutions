#include <boost/any.hpp>
#include <iostream>
#include <list>
#include <string>
#include <vector>
using namespace std;
typedef list<boost::any> list_any;

vector<int> filter_integers(list_any& elements)
{
 vector<int> list;	
  // indicate end of list
  
  list_any::iterator itr;		// iterator
  
  for (itr=elements.begin(); itr!=elements.end(); itr++)
  {
	  // check if any element in the list is of integer type
	  if (int* ptr = boost::any_cast<int> (&*itr))
		  list.push_back(*ptr);
	       
  }
  
  return list;
}

int main()
{
    list_any list_test;
    list_test.push_back(2);	   
    list_test.push_back("hello");	   
    list_test.push_back(2.5);	   
    list_test.push_back(3);
    vector<int> list = filter_integers(list_test);
	
    cout << "number of integers: " << list.size() << "\n"; 
    vector<int>::iterator p; 
    for (p=list.begin(); p<list.end(); p++)
        cout << *p << "\n"; 
    return 0;
}




/*
/*
Filter given vector of any python values only for integers
>>> filter_integers({"a", 3.14, 5})
{5}
>>> filter_integers({1, 2, 3, "abc", {}, {}})
{1, 2, 3}
*/
#include<stdio.h>
#include<vector>
#include<string>
#include<boost/any.hpp>
#include<list>
typedef std::list<boost::any> list_any;
using namespace std;
vector<int> filter_integers(list_any values){
    // define list_any::const_iterator itr; 


    // range for loop
    for (auto& any_i : values)
    {


        // check if the current any is of integer type
        if (int* ptr = boost::any_cast<int>(&any_i)) 
        {
            auto number = *ptr; // declare an auto integer named number storing the value in ptr


            // append number to the list numbers
            numbers.push_back(number);       
        }
    }
    return numbers;
}

*/
