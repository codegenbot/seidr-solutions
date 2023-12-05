[PYTHON]
def change_base(x, base):
    return str(x) if base == 10 else bin(x)[2:].zfill(len(str(x)))
[/PYTHON]