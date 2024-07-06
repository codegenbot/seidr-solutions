```
def even_odd_count(num):
    return sum(1 for i in str(abs(num)) if int(i)%2==0), sum(1 for i in str(abs(num)) if int(i)%2!=0)