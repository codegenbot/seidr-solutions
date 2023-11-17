/*a00ff8b8-31f9-45ac-83fd-cbe34583301f.cpp:8:9: error: ‘vector’ was not declared in this scope
    8 | int add(vector<int> lst){
      |         ^~~~~~
a00ff8b8-31f9-45ac-83fd-cbe34583301f.cpp:8:16: error: expected primary-expression before ‘int’
    8 | int add(vector<int> lst){
      |                ^~~
a00ff8b8-31f9-45ac-83fd-cbe34583301f.cpp:26:5: error: redefinition of ‘int main()’
   26 | int main(){
      |     ^~~~
a00ff8b8-31f9-45ac-83fd-cbe34583301f.cpp:20:5: note: ‘int main()’ previously defined here
   20 | int main(){
      |     ^~~~
In file included from a00ff8b8-31f9-45ac-83fd-cbe34583301f.cpp:25:
a00ff8b8-31f9-45ac-83fd-cbe34583301f.cpp: In function ‘int main()’:
a00ff8b8-31f9-45ac-83fd-cbe34583301f.cpp:27:16: error: ‘add’ cannot be used as a function
   27 |     assert (add({4, 4, 6, 8}) == 12);
      |             ~~~^~~~~~~~~~~~~~
Given a non-empty vector of integers lst. add the even elements that are at odd indices..


Examples:
    add({4, 2, 6, 7}) ==> 2 
*/
int add(vector<int> lst){
#include<vector>
	int sum = 0;
	for (int i = 0; i < lst.size(); i++)
	{
		if (lst[i] % 2 == 0 && i % 2 != 0)
		{
			sum = sum + lst[i];
		}
	}
	return sum;
}
int main(){
    
}
