float int_part;
    float dec_part = modf(number, &int_part);
    return dec_part;
}