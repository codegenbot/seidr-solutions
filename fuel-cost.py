```python
def fuel_cost():
    arr = list(map(int, input("Enter space-separated positive integers: ").split()))
    return sum(((n-2)//3) for n in arr)