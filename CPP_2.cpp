assert(std::abs(truncate_number(7.89) - 0.89) < 1e-4);
assert(std::abs(truncate_number(99.999) - 0.999) < 1e-4);
assert(std::abs(truncate_number(42.0) - 0.0) < 1e-4);