#include <iostream>
#include <string>
#include <cstring>
using namespace std;
/*
Given a starting height and a height after the ﬁrst bounce of a dropped ball, calculate the bounciness index (height of ﬁrst bounce / starting height). Then, given a number of bounces, use the bounciness index to calculate the total distance that the ball travels across those bounces.
For example,
input:
1.001
1.0
1
output:
2.001
input:
100.0
99.999
20
output:
3999.599534511501
input:
100.0
1.0
20
output:
102.02020201974588
input:
15.319
5.635
1
output:
20.954
input:
2.176
1.787
1
output:
3.963
*/

int main()

{
    double i;      //initial height
    double x;      //bounciness index
    double h;      //final height
    double dis=0;   //total distance
	cout<<"Enter initial height: "<<endl;
	cin>>i;
    cout<<"Enter bounciness height: "<<endl;
    cin>>h;
    cout<<"Enter number of times this bounce occurs: "<<endl;
    cin>>x;

    //distance calculation
    while(x<=0)
	{
		cout<<"bounciness coefficient should be atleast more than 1 time."<<endl;
		cout<<"re-enter: "<<endl;
		cin>>x;
	}
    
	for(int i = 0; i<x ; i++)
                {
       
				 dis+=i*(i*h);
                }
    
    cout << "Total distance travelled : "<<  dis <<endl;

    return 0;
}
