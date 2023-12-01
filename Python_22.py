values = input().split(",")

def filter_integers(values):
    return [x for x in values if isinstance(x, int)]

result = filter_integers(values) 

print(result)