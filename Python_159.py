
def eat(number, need, remaining):
if remaining <= 0:
return [number + need, 0]
else:
total = number + need
left = max(total - remaining, 0)
return [total, left]