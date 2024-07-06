
def eat(number, need, remaining):
if need > remaining:
left = 0
else:
left = max(remaining - need, 0)
return [total, left]