int sum = 0;
for(int i=0; i<q.size(); i++)
    sum += q[i];
return sum <= w && equal(q.begin(), q.begin() + q.size()/2, q.rbegin());