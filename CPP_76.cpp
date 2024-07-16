if (x <= 0 || n <= 0)
        return false;

    double result = pow(x, 1.0 / n);

    return std::abs(result - std::round(result)) < 0.000001;
}