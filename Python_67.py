```
def fruit_distribution(s,n):
    s = s.replace("apples and ","").replace("oranges ",",")
    nums = list(map(int,s.split()[0].split()))
    return n - sum(nums)