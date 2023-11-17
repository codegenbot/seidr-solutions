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
#include<algorithm>
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> order_by_points(vector<int> nums){
    vector<int> ans;
    vector<int> a;
    vector<int> b;
    vector<int> c;
    vector<int> d;
    vector<int> e;
    vector<int> f;
    vector<int> g;
    vector<int> h;
    vector<int> i;
    vector<int> j;
    vector<int> k;
    vector<int> l;
    vector<int> m;
    vector<int> n;
    vector<int> o;
    vector<int> p;
    vector<int> q;
    vector<int> r;
    vector<int> s;
    vector<int> t;
    vector<int> u;
    vector<int> v;
    vector<int> w;
    vector<int> x;
    vector<int> y;
    vector<int> z;

    int sum = 0;
    for(int i = 0;i < nums.size();i++){ 
        sum = 0;
        while(nums[i] != 0){
            sum += nums[i] % 10;
            nums[i] /= 10;
        }
        if(sum == 0){
            a.push_back(nums[i]);
        }
        else if(sum == 1){
            b.push_back(nums[i]);
        }
        else if(sum == 2){
            c.push_back(nums[i]);
        }
        else if(sum == 3){
            d.push_back(nums[i]);
        }
        else if(sum == 4){
            e.push_back(nums[i]);
        }
        else if(sum == 5){
            f.push_back(nums[i]);
        }
        else if(sum == 6){
            g.push_back(nums[i]);
        }
        else if(sum == 7){
            h.push_back(nums[i]);
        }
        else if(sum == 8){
            i.push_back(nums[i]);
        }
        else if(sum == 9){
            j.push_back(nums[i]);
        }
        else if(sum == 10){
            k.push_back(nums[i]);
        }
        else if(sum == 11){
            l.push_back(nums[i]);
        }
        else if(sum == 12){
            m.push_back(nums[i]);
        }
        else if(sum == 13){
            n.push_back(nums[i]);
        }
        else if(sum == 14){
            o.push_back(nums[i]);
        }
        else if(sum == 15){
            p.push_back(nums[i]);
        }
        else if(sum == 16){
            q.push_back(nums[i]);
        }
        else if(sum == 17){
            r.push_back(nums[i]);
        }
        else if(sum == 18){
            s.push_back(nums[i]);
        }
        else if(sum == 19){
            t.push_back(nums[i]);
        }
        else if(sum == 20){
            u.push_back(nums[i]);
        }
        else if(sum == 21){
            v.push_back(nums[i]);
        }
        else if(sum == 22){
            w.push_back(nums[i]);
        }
        else if(sum == 23){
            x.push_back(nums[i]);
        }
        else if(sum == 24){
            y.push_back(nums[i]);
        }
        else if(sum == 25){
            z.push_back(nums[i]);
        }
    }
    for(int i = 0;i < a.size();i++){
        ans.push_back(a[i]);
    }
    for(i = 0;i < b.size();i++){
        ans.push_back(b[i]);
    }
    for(i = 0;i < c.size();i++){
        ans.push_back(c[i]);
    }
    for(i = 0;i < d.size();i++){
        ans.push_back(d[i]);
    }
    for(i = 0;i < e.size();i++){
        ans.push_back(e[i]);
    }
    for(i = 0;i < f.size();i++){
        ans.push_back(f[i]);
    }
    for(i = 0;i < g.size();i++){
        ans.push_back(g[i]);
    }
    for(i = 0;i < h.size();i++){
        ans.push_back(h[i]);
    }
    for(i = 0;i < i.size();i++){
        ans.push_back(i[i]);
    }
    for(i = 0;i < j.size();i++){
        ans.push_back(j[i]);
    }
    for(i = 0;i < k.size();i++){
        ans.push_back(k[i]);
    }
    for(i = 0;i < l.size();i++){
        ans.push_back(l[i]);
    }
    for(i = 0;i < m.size();i++){
        ans.push_back(m[i]);
    }
    for(i = 0;i < n.size();i++){
        ans.push_back(n[i]);
    }
    for(i = 0;i < o.size();i++){
        ans.push_back(o[i]);
    }
    for(i = 0;i < p.size();i++){
        ans.push_back(p[i]);
    }
    for(i = 0;i < q.size();i++){
        ans.push_back(q[i]);
    }
    for(i = 0;i < r.size();i++){
        ans.push_back(r[i]);
    }
    for(i = 0;i < s.size();i++){
        ans.push_back(s[i]);
    }
    for(i = 0;i < t.size();i++){
        ans.push_back(t[i]);
    }
    for(i = 0;i < u.size();i++){
        ans.push_back(u[i]);
    }
    for(i = 0;i < v.size();i++){
        ans.push_back(v[i]);
    }
    for(i = 0;i < w.size();i++){
        ans.push_back(w[i]);
    }
    for(i = 0;i < x.size();i++){
        ans.push_back(x[i]);
    }
    for(i = 0;i < y.size();i++){
        ans.push_back(y[i]);
    }
    for(i = 0;i < z.size();i++){
        ans.push_back(z[i]);
    }
    return ans;
}
