def is_simple_power(x, n):
    if x < 1:
        return False
    root = int(round(n**0.5))
    return root * root == x and isinstance(root, int)