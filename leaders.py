```python
def leaders(a):
    return [a[i] for i in range(len(a)-1,-1,-1) if all(a[i] >= a[j] for j in range(i+1,len(a)))]

print(leaders([16,17,4,3,5,2]))