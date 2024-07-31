return -coeffs[1] / coeffs[0];

assert(std::abs(poly(coeffs, find_zero(coeffs))) < 1e-3);