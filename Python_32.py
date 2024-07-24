assert len(xs) % 2 == 0
    largest_non_zero_coeff = max(xs)
    zero_point_candidates = [-largest_non_zero_coeff - 1, largest_non_zero_coeff + 1]
    
    def f(x):
        return poly(xs, x)

    for candidate in zero_point_candidates:
        if abs(f(candidate)) < 1e-6:
            return candidate