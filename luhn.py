```python
return sum(int(x) for x in str(sum(map(lambda x: 2*x if (i:=len(card)-1)//2!=i else 1*x, card)) if int(x)>9 else int(x)-9))