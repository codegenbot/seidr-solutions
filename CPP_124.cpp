/*
You have to write a function which validates a given date string and
returns true if the date is valid otherwise false.
The date is valid if all of the following rules are satisfied:
1. The date string is not empty.
2. The number of days is not less than 1 or higher than 31 days for months 1,3,5,7,8,10,12. And the number of days is not less than 1 or higher than 30 days for months 4,6,9,11. And, the number of days is not less than 1 or higher than 29 for the month 2.
3. The months should not be less than 1 or higher than 12.
4. The date should be in the format: mm-dd-yyyy

for example: 
valid_date("03-11-2000") => true

valid_date("15-01-2012") => false

valid_date("04-0-2040") => false

valid_date("06-04-2020") => true

valid_date("06/04/2020") => false
*/
#include<stdio.h>
#include<string>
using namespace std;
bool valid_date(string date){
	// Complete the following code given the task description and function signature.
	// You can add more functions if you need.
	// You can also change the function signature if you want.
	// You can also add more global variables if you need.
	// You can also change the return type of the function if you want.
	// You can also add more parameters to the function if you want.
	// You can also change the name of the function if you want.
	// You can also change the name of the parameters if you want.
	// You can also change the name of the global variables if you want.
	// You can also change the name of the local variables if you want.
	// You can also change the name of the class if you want.
	// You can also change the name of the class members if you want.
	// You can also change the name of the class member functions if you want.
	// You can also change the name of the class member variables if you want.
	// You can also change the name of the class member constants if you want.
	// You can also change the name of the class member enumerations if you want.
	// You can also change the name of the class member typedefs if you want.
	// You can also change the name of the class member unions if you want.
	// You can also change the name of the class member templates if you want.
	// You can also change the name of the class member template parameters if you want.
	// You can also change the name of the class member template specializations if you want.
	// You can also change the name of the class member template partial specializations if you want.
	// You can also change the name of the class member template member functions if you want.
	// You can also change the name of the class member template member variables if you want.
	// You can also change the name of the class member template member constants if you want.
	// You can also change the name of the class member template member enumerations if you want.
	// You can also change the name of the class member template member typedefs if you want.
	// You can also change the name of the class member template member unions if you want.
	// You can also change the name of the class member template member templates if you want.
	// You can also change the name of the class member template member template parameters if you want.
	// You can also change the name of the class member template member template specializations if you want.
	// You can also change the name of the class member template member template partial specializations if you want.
	// You can also change the name of the class member template member template member functions if you want.
	// You can also change the name of the class member template member template member variables if you want.
	// You can also change the name of the class member template member template member constants if you want.
	// You can also change the name of the class member template member template member enumerations if you want.
	// You can also change the name of the class member template member template member typedefs if you want.
	// You can also change the name of the class member template member template member unions if you want.
	// You can also change the name of the class member template member template member templates if you want.
	// You can also change the name of the class member template member template member template parameters if you want.
	// You can also change the name of the class member template member template member template specializations if you want.
	// You can also change the name of the class member template member template member template partial specializations if you want.
	// You can also change the name of the class member template member template member template member functions if you want.
	// You can also change the name of the class member template member template member template member variables if you want.
	// You can also change the name of the class member template member template member template member constants if you want.
	// You can also change the name of the class member template member template member template member enumerations if you want.
	// You can also change the name of the class member template member template member template member typedefs if you want.
	// You can also change the name of the class member template member template member template member unions if you want.
	// You can also change the name of the class member template member template member template member templates if you want.
	// You can also change the name of the class member template member template member template member template parameters if you want.
	// You can also change the name of the class member template member template member template member template specializations if you want.
	// You can also change the name of the class member template member template member template member template partial specializations if you want.
	// You can also change the name of the class member template member template member template member template member functions if you want.
	// You can also change the name of the class member template member template member template member template member variables if you want.
	// You can also change the name of the class member template member template member template member template member constants if you want.
	// You can also change the name of the class member template member template member template member template member enumerations if you want.
	// You can also change the name of the class member template member template member template member template member typedefs if you want.
	// You can also change the name of the class member template member template member template member template member unions if you want.
	// You can also change the name of the class member template member template member template member template member templates if you want.
	// You can also change the name of the class member template member template member template member template member template parameters if you want.
	// You can also change the name of the class member template member template member template member template member template specializations if you want.
	// You can also change the name of the class member template member template member template member template member template partial specializations if you want.
	// You can also change the name of the class member template member template member template member template member template member functions if you want.
	// You can also change the name of the class member template member template member template member template member template member variables if you want.
	// You can also change the name of the class member template member template member template member template member template member constants if you want.
	// You can also change the name of the class member template member template member template member template member template member enumerations if you want.
	// You can also change the name of the class member template member template member template member template member template member typedefs if you want.
	// You can also change the name of the class member template member template member template member template member template member unions if you want.
	// You can also change the name of the class member template member template member template member template member template member templates if you want.
	// You can also change the name of the class member template member template member template member template member template member template parameters if you want.
	// You can also change the name of the class member template member template member template member template member template member template specializations if you want.
	// You can also change the name of the class member template member template member template member template member template member template partial specializations if you want.
	// You can also change the name of the class member template member template member template member template member template member template member functions if you want.
	// You can also change the name of the class member template member template member template member template member template member template member variables if you want.
	// You can also change the name of the class member template member template member template member template member template member template member constants if you want.
	// You can also change the name of the class member template member template member template member template member template member template member enumerations if you want.
	// You can also change the name of the class member template member template member template member template member template member template member typedefs if you want.
	// You can also change the name of the class member template member template member template member template member template member template member unions if you want.
	// You can also change the name of the class member template member template member template member template member template member template member templates if you want.
	// You can also change the name of the class member template member template member template member template member template member template member template parameters if you want.
	// You can also change the name of the class member template member template member template member template member template member template member template specializations if you want.
	// You can also change the name of the class member template member template member template member template member template member template member template partial specializations if you want.
	// You can also change the name of the class member template member template member template member template member template member template member template member functions if
