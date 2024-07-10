def leaders(integers):
    return [integer for i, integer in enumerate(reversed(integers)) if all(j <= integer for j in integers[:i])]