/*
Write a function which sorts the given vector of integers
in ascending order according to the sum of their digits.
Note: if there are several items with similar sum of their digits,
order them based on their index in original vector.

For example:
>>> order_by_points({1, 11, -1, -11, -12}) == {-1, -11, 1, -12, 11}
>>> order_by_points({}) == {}
*/
#include<stdio.h>
#include<math.h>
#include<vector>
#include<string>
using namespace std;
vector<int> order_by_points(vector<int> nums){
int i,j,k,m,n,p,q,r,s,t,u,v,w,x,y,z;
vector<int>a;
vector<int>b;
vector<int>c;
vector<int>d;
vector<int>e;
vector<int>f;
vector<int>g;
vector<int>h;
vector<int>ii;
vector<int>j;
vector<int>k;
vector<int>l;
vector<int>m;
vector<int>n;
vector<int>o;
vector<int>p;
vector<int>q;
vector<int>r;
vector<int>s;
vector<int>t;
vector<int>u;
vector<int>v;
vector<int>w;
vector<int>x;
vector<int>y;
vector<int>z;
for(i=0;i<nums.size();i++)
{
a.push_back(nums[i]%10);
b.push_back(nums[i]/10);
c.push_back(b[i]%10);
d.push_back(b[i]/10);
e.push_back(d[i]%10);
f.push_back(d[i]/10);
g.push_back(f[i]%10);
h.push_back(f[i]/10);
ii.push_back(h[i]%10);
j.push_back(ii[i]/10);
k.push_back(j[i]%10);
l.push_back(j[i]/10);
m.push_back(l[i]%10);
n.push_back(l[i]/10);
o.push_back(n[i]%10);
p.push_back(n[i]/10);
q.push_back(p[i]%10);
r.push_back(p[i]/10);
s.push_back(r[i]%10);
t.push_back(r[i]/10);
u.push_back(t[i]%10);
v.push_back(t[i]/10);
w.push_back(v[i]%10);
x.push_back(v[i]/10);
y.push_back(x[i]%10);
z.push_back(x[i]/10);
}
for(i=0;i<nums.size();i++)
{
for(j=0;j<nums.size();j++)
{
if(a[i]+b[i]+c[i]+d[i]+e[i]+f[i]+g[i]+h[i]+ii[i]+j[i]+k[i]+l[i]+m[i]+n[i]+o[i]+p[i]+q[i]+r[i]+s[i]+t[i]+u[i]+v[i]+w[i]+x[i]+y[i]+z[i]<a[j]+b[j]+c[j]+d[j]+e[j]+f[j]+g[j]+h[j]+ii[j]+j[j]+k[j]+l[j]+m[j]+n[j]+o[j]+p[j]+q[j]+r[j]+s[j]+t[j]+u[j]+v[j]+w[j]+x[j]+y[j]+z[j])
{
temp=nums[i];
nums[i]=nums[j];
nums[j]=temp;
}
}
}
return nums;
}
int main()
{
vector<int>nums;
nums.push_back(1);
nums.push_back(11);
nums.push_back(-1);
nums.push_back(-11);
nums.push_back(-12);
nums=order_by_points(nums);
for(i=0;i<nums.size();i++)
{
printf("%d ",nums[i]);
}
return 0;
}
