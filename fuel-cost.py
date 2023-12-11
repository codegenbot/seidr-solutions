```
import math
def fuel_cost(my_list):
    return sum([math.floor(x / 3) - 2 for x in my_list])
```