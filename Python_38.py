n = (len(s) + 2) // 3
groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range(n)] + ['']*(3-n)