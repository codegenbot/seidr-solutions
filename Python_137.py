    def compare_one(a, b):
        if isinstance(a, str) and isinstance(b, (int, float)):
            a = str(a).replace('.', '').replace(',', '.').format('{:.0f}')
        elif isinstance(b, str) and isinstance(a, (int, float)):
            b = str(b).replace('.', '').replace(',', '.').format('{:.0f}')
        if isinstance(a, str):
            a = float(a.replace(',', '.'))
        if isinstance(b, str):
            b = float(b.replace(',', '.'))