n=int(input())
m=int(input())
if n<=1 or m<=1:
  print(0.0)
elif n>=m:
  print(1-((m-1)/(n+m-1)))
else:
  print((m-n+1)/(m+n))